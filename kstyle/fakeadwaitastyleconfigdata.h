// This file is generated by kconfig_compiler from adwaita.kcfg.
// All changes you do to this file will be lost.
#ifndef ADWAITA_STYLECONFIGDATA_H
#define ADWAITA_STYLECONFIGDATA_H

#include <QColor>
#include <QString>
#include <QStringList>

namespace Adwaita {

class StyleConfigData
{
  public:
    enum EnumMnemonicsMode { MN_NEVER, MN_AUTO, MN_ALWAYS };
    enum EnumWindowDragMode { WD_NONE, WD_MINIMAL, WD_FULL };

    static StyleConfigData *self();
    ~StyleConfigData();

    /**
      Set ShadowStrength
    */
    static
    void setShadowStrength( int v )
    {
      if (v < 25)
      {
        v = 25;
      }

      if (v > 255)
      {
        v = 255;
      }

      self()->mShadowStrength = v;
    }

    /**
      Get ShadowStrength
    */
    static
    int shadowStrength()
    {
      return self()->mShadowStrength;
    }

    /**
      Set ShadowSize
    */
    static
    void setShadowSize( int v )
    {
      if (v < 6)
      {
        v = 6;
      }

      if (v > 64)
      {
        v = 64;
      }


      self()->mShadowSize = v;
    }

    /**
      Get ShadowSize
    */
    static
    int shadowSize()
    {
      return self()->mShadowSize;
    }

    /**
      Set ShadowColor
    */
    static
    void setShadowColor( const QColor & v )
    {
      self()->mShadowColor = v;
    }

    /**
      Get ShadowColor
    */
    static
    QColor shadowColor()
    {
      return self()->mShadowColor;
    }

    /**
      Set OutlineCloseButton
    */
    static
    void setOutlineCloseButton( bool v )
    {
      self()->mOutlineCloseButton = v;
    }

    /**
      Get OutlineCloseButton
    */
    static
    bool outlineCloseButton()
    {
      return self()->mOutlineCloseButton;
    }

    /**
      Set AnimationsEnabled
    */
    static
    void setAnimationsEnabled( bool v )
    {
      self()->mAnimationsEnabled = v;
    }

    /**
      Get AnimationsEnabled
    */
    static
    bool animationsEnabled()
    {
      return self()->mAnimationsEnabled;
    }

    /**
      Set AnimationSteps
    */
    static
    void setAnimationSteps( int v )
    {
      self()->mAnimationSteps = v;
    }

    /**
      Get AnimationSteps
    */
    static
    int animationSteps()
    {
      return self()->mAnimationSteps;
    }

    /**
      Set AnimationsDuration
    */
    static
    void setAnimationsDuration( int v )
    {
      self()->mAnimationsDuration = v;
    }

    /**
      Get AnimationsDuration
    */
    static
    int animationsDuration()
    {
      return self()->mAnimationsDuration;
    }

    /**
      Set StackedWidgetTransitionsEnabled
    */
    static
    void setStackedWidgetTransitionsEnabled( bool v )
    {
      self()->mStackedWidgetTransitionsEnabled = v;
    }

    /**
      Get StackedWidgetTransitionsEnabled
    */
    static
    bool stackedWidgetTransitionsEnabled()
    {
      return self()->mStackedWidgetTransitionsEnabled;
    }

    /**
      Set ProgressBarAnimated
    */
    static
    void setProgressBarAnimated( bool v )
    {
      self()->mProgressBarAnimated = v;
    }

    /**
      Get ProgressBarAnimated
    */
    static
    bool progressBarAnimated()
    {
      return self()->mProgressBarAnimated;
    }

    /**
      Set ProgressBarBusyStepDuration
    */
    static
    void setProgressBarBusyStepDuration( int v )
    {
      self()->mProgressBarBusyStepDuration = v;
    }

    /**
      Get ProgressBarBusyStepDuration
    */
    static
    int progressBarBusyStepDuration()
    {
      return self()->mProgressBarBusyStepDuration;
    }

    /**
      Set ScrollBarAddLineButtons
    */
    static
    void setScrollBarAddLineButtons( int v )
    {
      self()->mScrollBarAddLineButtons = v;
    }

    /**
      Get ScrollBarAddLineButtons
    */
    static
    int scrollBarAddLineButtons()
    {
      return self()->mScrollBarAddLineButtons;
    }

    /**
      Set ScrollBarSubLineButtons
    */
    static
    void setScrollBarSubLineButtons( int v )
    {
      self()->mScrollBarSubLineButtons = v;
    }

    /**
      Get ScrollBarSubLineButtons
    */
    static
    int scrollBarSubLineButtons()
    {
      return self()->mScrollBarSubLineButtons;
    }

    /**
      Set ScrollBarShowOnMouseOver
    */
    static
    void setScrollBarShowOnMouseOver( bool v )
    {
      self()->mScrollBarShowOnMouseOver = v;
    }

    /**
      Get ScrollBarShowOnMouseOver
    */
    static
    bool scrollBarShowOnMouseOver()
    {
      return self()->mScrollBarShowOnMouseOver;
    }

    /**
      Set MnemonicsMode
    */
    static
    void setMnemonicsMode( int v )
    {
      self()->mMnemonicsMode = v;
    }

    /**
      Get MnemonicsMode
    */
    static
    int mnemonicsMode()
    {
      return self()->mMnemonicsMode;
    }

    /**
      Set ToolBarDrawItemSeparator
    */
    static
    void setToolBarDrawItemSeparator( bool v )
    {
      self()->mToolBarDrawItemSeparator = v;
    }

    /**
      Get ToolBarDrawItemSeparator
    */
    static
    bool toolBarDrawItemSeparator()
    {
      return self()->mToolBarDrawItemSeparator;
    }

    /**
      Set ViewDrawFocusIndicator
    */
    static
    void setViewDrawFocusIndicator( bool v )
    {
      self()->mViewDrawFocusIndicator = v;
    }

    /**
      Get ViewDrawFocusIndicator
    */
    static
    bool viewDrawFocusIndicator()
    {
      return self()->mViewDrawFocusIndicator;
    }

    /**
      Set SliderDrawTickMarks
    */
    static
    void setSliderDrawTickMarks( bool v )
    {
      self()->mSliderDrawTickMarks = v;
    }

    /**
      Get SliderDrawTickMarks
    */
    static
    bool sliderDrawTickMarks()
    {
      return self()->mSliderDrawTickMarks;
    }

    /**
      Set ViewDrawTreeBranchLines
    */
    static
    void setViewDrawTreeBranchLines( bool v )
    {
      self()->mViewDrawTreeBranchLines = v;
    }

    /**
      Get ViewDrawTreeBranchLines
    */
    static
    bool viewDrawTreeBranchLines()
    {
      return self()->mViewDrawTreeBranchLines;
    }

    /**
      Set ViewInvertSortIndicator
    */
    static
    void setViewInvertSortIndicator( bool v )
    {
      self()->mViewInvertSortIndicator = v;
    }

    /**
      Get ViewInvertSortIndicator
    */
    static
    bool viewInvertSortIndicator()
    {
      return self()->mViewInvertSortIndicator;
    }

    /**
      Set TabBarDrawCenteredTabs
    */
    static
    void setTabBarDrawCenteredTabs( bool v )
    {
      self()->mTabBarDrawCenteredTabs = v;
    }

    /**
      Get TabBarDrawCenteredTabs
    */
    static
    bool tabBarDrawCenteredTabs()
    {
      return self()->mTabBarDrawCenteredTabs;
    }

    /**
      Set TitleWidgetDrawFrame
    */
    static
    void setTitleWidgetDrawFrame( bool v )
    {
      self()->mTitleWidgetDrawFrame = v;
    }

    /**
      Get TitleWidgetDrawFrame
    */
    static
    bool titleWidgetDrawFrame()
    {
      return self()->mTitleWidgetDrawFrame;
    }

    /**
      Set DockWidgetDrawFrame
    */
    static
    void setDockWidgetDrawFrame( bool v )
    {
      self()->mDockWidgetDrawFrame = v;
    }

    /**
      Get DockWidgetDrawFrame
    */
    static
    bool dockWidgetDrawFrame()
    {
      return self()->mDockWidgetDrawFrame;
    }

    /**
      Set SidePanelDrawFrame
    */
    static
    void setSidePanelDrawFrame( bool v )
    {
      self()->mSidePanelDrawFrame = v;
    }

    /**
      Get SidePanelDrawFrame
    */
    static
    bool sidePanelDrawFrame()
    {
      return self()->mSidePanelDrawFrame;
    }

    /**
      Set MenuItemDrawStrongFocus
    */
    static
    void setMenuItemDrawStrongFocus( bool v )
    {
      self()->mMenuItemDrawStrongFocus = v;
    }

    /**
      Get MenuItemDrawStrongFocus
    */
    static
    bool menuItemDrawStrongFocus()
    {
      return self()->mMenuItemDrawStrongFocus;
    }

    /**
      Set WindowDragMode
    */
    static
    void setWindowDragMode( int v )
    {
      self()->mWindowDragMode = v;
    }

    /**
      Get WindowDragMode
    */
    static
    int windowDragMode()
    {
      return self()->mWindowDragMode;
    }

    /**
      Set WindowDragWhiteList
    */
    static
    void setWindowDragWhiteList( const QStringList & v )
    {
      self()->mWindowDragWhiteList = v;
    }

    /**
      Get WindowDragWhiteList
    */
    static
    QStringList windowDragWhiteList()
    {
      return self()->mWindowDragWhiteList;
    }

    /**
      Set WindowDragBlackList
    */
    static
    void setWindowDragBlackList( const QStringList & v )
    {
      self()->mWindowDragBlackList = v;
    }

    /**
      Get WindowDragBlackList
    */
    static
    QStringList windowDragBlackList()
    {
      return self()->mWindowDragBlackList;
    }

    /**
      Set UseWMMoveResize
    */
    static
    void setUseWMMoveResize( bool v )
    {
      self()->mUseWMMoveResize = v;
    }

    /**
      Get UseWMMoveResize
    */
    static
    bool useWMMoveResize()
    {
      return self()->mUseWMMoveResize;
    }

    /**
      Set SplitterProxyEnabled
    */
    static
    void setSplitterProxyEnabled( bool v )
    {
      self()->mSplitterProxyEnabled = v;
    }

    /**
      Get SplitterProxyEnabled
    */
    static
    bool splitterProxyEnabled()
    {
      return self()->mSplitterProxyEnabled;
    }

    /**
      Set SplitterProxyWidth
    */
    static
    void setSplitterProxyWidth( int v )
    {
      self()->mSplitterProxyWidth = v;
    }

    /**
      Get SplitterProxyWidth
    */
    static
    int splitterProxyWidth()
    {
      return self()->mSplitterProxyWidth;
    }

    /**
      Set WidgetExplorerEnabled
    */
    static
    void setWidgetExplorerEnabled( bool v )
    {
      self()->mWidgetExplorerEnabled = v;
    }

    /**
      Get WidgetExplorerEnabled
    */
    static
    bool widgetExplorerEnabled()
    {
      return self()->mWidgetExplorerEnabled;
    }

    /**
      Set DrawWidgetRects
    */
    static
    void setDrawWidgetRects( bool v )
    {
      self()->mDrawWidgetRects = v;
    }

    /**
      Get DrawWidgetRects
    */
    static
    bool drawWidgetRects()
    {
      return self()->mDrawWidgetRects;
    }

  protected:
    StyleConfigData();
    friend class StyleConfigDataHelper;


    // Common
    int mShadowStrength;
    int mShadowSize;
    QColor mShadowColor;
    bool mOutlineCloseButton;

    // Style
    bool mAnimationsEnabled;
    int mAnimationSteps;
    int mAnimationsDuration;
    bool mStackedWidgetTransitionsEnabled;
    bool mProgressBarAnimated;
    int mProgressBarBusyStepDuration;
    int mScrollBarAddLineButtons;
    int mScrollBarSubLineButtons;
    bool mScrollBarShowOnMouseOver;
    int mMnemonicsMode;
    bool mToolBarDrawItemSeparator;
    bool mViewDrawFocusIndicator;
    bool mSliderDrawTickMarks;
    bool mViewDrawTreeBranchLines;
    bool mViewInvertSortIndicator;
    bool mTabBarDrawCenteredTabs;
    bool mTitleWidgetDrawFrame;
    bool mDockWidgetDrawFrame;
    bool mSidePanelDrawFrame;
    bool mMenuItemDrawStrongFocus;
    int mWindowDragMode;
    QStringList mWindowDragWhiteList;
    QStringList mWindowDragBlackList;
    bool mUseWMMoveResize;
    bool mSplitterProxyEnabled;
    int mSplitterProxyWidth;
    bool mWidgetExplorerEnabled;
    bool mDrawWidgetRects;

  private:

    static StyleConfigData *_self;
};

}

#endif

