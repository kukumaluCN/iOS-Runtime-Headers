/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMapTable, NSString, NSUserDefaults, UIMoveEvent, UIPanGestureRecognizer, UIScrollView, UIWindow, _UIDynamicAnimationGroup, _UIFocusEngineTapGestureRecognizer, _UIFocusEngineTargetedDynamicAnimation, _UIFocusTouchDebugView;

@interface _UIFocusEngine : NSObject <UIGestureRecognizerDelegate> {
    NSMapTable *_activeScrollViewBounds;
    unsigned int _currentGestureID;
    BOOL _enabled;
    struct { 
        unsigned int isSettingFocusedView : 1; 
        unsigned int isTrackingTouch : 1; 
        unsigned int isContinuingTouchWithMomentum : 1; 
        unsigned int isAnimatingFocusDirectionRollback : 1; 
        unsigned int shouldShowDebugOverlays : 1; 
    } _flags;
    _UIFocusEngineTargetedDynamicAnimation *_focusDirectionRollbackAnimation;
    float _lastEdgeScrollEdgeValue;
    UIScrollView *_lastScrolledScroll;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchPointNormalized;
    struct CGPoint { 
        float x; 
        float y; 
    } _momentumNormalized;
    UIMoveEvent *_moveEvent;
    struct CGPoint { 
        float x; 
        float y; 
    } _movementOriginPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _originalTouchPointNormalized;
    UIPanGestureRecognizer *_panGestureRecognizer;
    BOOL _playsSoundOnFocusChange;
    NSArray *_remoteGestures;
    _UIFocusEngineTargetedDynamicAnimation *_scrollAnimationAxisX;
    _UIFocusEngineTargetedDynamicAnimation *_scrollAnimationAxisY;
    _UIDynamicAnimationGroup *_scrollAnimationGroup;
    BOOL _sendsFocusDirection;
    BOOL _shouldShowDebugOverlays;
    _UIFocusEngineTapGestureRecognizer *_tapGestureRecognizer;
    UIWindow *_targetWindow;
    unsigned long _tickSoundID;
    _UIFocusTouchDebugView *_touchIndicatorView;
    _UIDynamicAnimationGroup *_touchMomentumAnimationGroup;
    NSUserDefaults *_userDefaults;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) unsigned int hash;
@property(retain) UIMoveEvent * moveEvent;
@property(getter=_playsSoundOnFocusChange,setter=_setPlaysSoundOnFocusChange:) BOOL playsSoundOnFocusChange;
@property(getter=_sendsFocusDirection,setter=_setSendsFocusDirection:) BOOL sendsFocusDirection;
@property BOOL shouldShowDebugOverlays;
@property(readonly) Class superclass;
@property UIWindow * targetWindow;

+ (id)defaultTuningValues;
+ (void)initialize;
+ (void)resetTuningValues;
+ (void)resetTuningValuesIfNecessary;

- (void)_addGestureRecognizers;
- (id)_bestFocusCandidateForFocusHeading:(unsigned int)arg1 currentFocusView:(id)arg2 direction:(struct CGSize { float x1; float x2; })arg3 inView:(id)arg4;
- (id)_bestFocusCandidateStartingAtView:(id)arg1 inDirection:(struct CGSize { float x1; float x2; })arg2 inView:(id)arg3;
- (void)_cleanupTickSound;
- (id)_closestFocusableViewToPoint:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (id)_closestFocusableViewToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_contentOffsetForScrollView:(id)arg1 toFocusView:(id)arg2;
- (void)_continueTouchWithMomentum;
- (id)_focusedView;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleButtonGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_loadScrollViewContentInDirection:(struct CGSize { float x1; float x2; })arg1 fromView:(id)arg2;
- (BOOL)_moveFocusAlongVector:(struct CGSize { float x1; float x2; })arg1;
- (void)_panGestureEnd:(id)arg1;
- (void)_panGestureStart:(id)arg1;
- (void)_panGestureUpdate:(id)arg1 atLocation:(struct CGPoint { float x1; float x2; })arg2 reportedVelocity:(struct CGPoint { float x1; float x2; })arg3;
- (void)_playTickSound;
- (BOOL)_playsSoundOnFocusChange;
- (void)_recordMomentumForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_removeGestureRecognizers;
- (void)_resetFocusDirectionRollback;
- (void)_resetMomentum;
- (void)_scrollFromView:(id)arg1 toView:(id)arg2;
- (void)_sendGestureBeginNotification;
- (void)_sendGestureEndNotification;
- (BOOL)_sendsFocusDirection;
- (void)_setFocusedView:(id)arg1;
- (void)_setPlaysSoundOnFocusChange:(BOOL)arg1;
- (void)_setSendsFocusDirection:(BOOL)arg1;
- (void)_setupDebugOverlays;
- (void)_setupTickSound;
- (void)_startFocusDirectionRollback;
- (void)_teardownDebugOverlays;
- (int)_touchRegionForDigitizerLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_touchSensitivityForView:(id)arg1;
- (void)_updateDebugOverlayByRemovingTouchIndicators;
- (void)_updateDebugOverlayWithTouchAtNormalizedPoint:(struct CGPoint { float x1; float x2; })arg1 navigationBoundary:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_updateFocusedViewAndScroll:(id)arg1;
- (void)_updateScrollView:(id)arg1 visibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })_vectorForFocusHeading:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBoundsForScrollView:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (BOOL)isEnabled;
- (id)moveEvent;
- (BOOL)moveInDirection:(unsigned int)arg1;
- (BOOL)moveWithEvent:(id)arg1;
- (void)reset;
- (void)setEnabled:(BOOL)arg1;
- (void)setMoveEvent:(id)arg1;
- (void)setShouldShowDebugOverlays:(BOOL)arg1;
- (void)setTargetWindow:(id)arg1;
- (BOOL)shouldShowDebugOverlays;
- (id)targetWindow;

@end