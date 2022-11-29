#ifndef GRAPH_H
#define GRAPH_H
#include <string>
#include <fstream>
#include <cstring>
using std::string;
using std::ifstream;
using std::ofstream;
using namespace std;
class graph
{
    private:
        string name;
        int size;
        string format;
        int width;
        int height;
        int dpi;
        int depth;
    public:
        graph() : name(""), size(0), format(""),width(0),height(0),dpi(0),depth(0){};
        graph (string, int, string,int, int,int,int);
        string get_name();
        void out();
        static int pl(graph[]);
        void del_picture();

        friend ofstream& operator<<(ofstream& file, const graph& gr);
        friend ifstream& operator>>(ifstream& file,graph& gr);
        friend ostream& operator<<(ostream& stream, const graph& picture);
        friend istream& operator>>(istream& stream, graph& picture);
        bool operator==(graph picture);
};
#endif
