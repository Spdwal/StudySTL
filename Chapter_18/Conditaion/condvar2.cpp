#include<condition_variable>
#include<mutex>
#include<future>
#include<thread>
#include<iostream>
#include<queue>

std::queue<int> queue;
std::mutex queueMutex;
std::condition_variable queueCondVar;

void provieder(int val)
{
	for(int i = 0; i < 6; ++i)
	{
		std::lock_guard<std::mutex> lg(queueMutex);
		queue.push(val + i);
		queueCondVar.notify_one();

		std::this_thread::sleep_for(std::chrono::milliseconds(val));
	}
}

void consumer(int num)
{
	while(true)
	{
		int val;
		{
			std::unique_lock<std::mutex> ul(queueMutex);
			queueCondVar.wait(ul, []{return !queue.empty();});
			val = queue.front();
			queue.pop();
		}
		std::cout << "consumer: " << num << ": " << val << std::endl;
	}
}

int main()
{
	auto p1 = std::async(std::launch::async,provieder,100);
	auto p2 = std::async(std::launch::async,provieder,200);
	auto p3 = std::async(std::launch::async,provieder,300);

	auto c1 = std::async(std::launch::async, consumer, 1);
	auto c2 = std::async(std::launch::async, consumer, 2);
	return 0;
}

