#include <QGraphicsView>
#include <memory>
struct PdData;

class PdObjectView : public QGraphicsView {
public:
    explicit PdObjectView(QWidget *parent = nullptr);
    ~PdObjectView();

    void displayPdData(const PdData &p);

private:
    struct Impl;
    std::unique_ptr<Impl> P;
};
