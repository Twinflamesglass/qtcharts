#ifndef CHARTTHEME_H
#define CHARTTHEME_H

#include "qchartglobal.h"
#include "qchart.h"
#include <QColor>

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class ChartItem;
class QChartSeries;
class XYLineChartItem;
class QXYChartSeries;
class BarGroup;
class BarChartSeries;
class StackedBarGroup;
class StackedBarChartSeries;
class PercentBarChartSeries;
class PercentBarGroup;

class ChartTheme
{
protected:
    explicit ChartTheme();
public:
    static ChartTheme* createTheme(QChart::ChartThemeId theme);
    void decorate(QChart* chart);
    void decorate(ChartItem* item, QChartSeries* series,int count);
    void decorate(XYLineChartItem* item, QXYChartSeries*, int count);
    void decorate(BarGroup* item, BarChartSeries* series,int count);
    void decorate(StackedBarGroup* item, StackedBarChartSeries* series,int count);
    void decorate(PercentBarGroup* item, PercentBarChartSeries* series,int count);

protected:
    QColor m_gradientStartColor;
    QColor m_gradientEndColor;
    QList<QColor> m_seriesColor;

};

QTCOMMERCIALCHART_END_NAMESPACE

#endif // CHARTTHEME_H
