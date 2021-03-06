/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomDial : UIView {
    UIImageView * __backgroundView;
    BOOL  __backgroundViewUpdateNeeded;
    UIView * __dotAndLabelContainerView;
    CAMZoomDialDotsView * __dotsFrom2x;
    CAMZoomDialDotsView * __dotsFromMinimumZoomFactor;
    BOOL  __labelAndDotUpdateNeeded;
    NSArray * __labels;
    float  __radiusDelta;
    float  __spacingMultiplier;
    float  _maximumZoomFactor;
    float  _minimumZoomFactor;
    int  _orientation;
    BOOL  _shouldDisableValuesBelow2x;
    BOOL  _shouldShowLabelAt2x;
    float  _zoomFactor;
}

@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (getter=_isBackgroundViewUpdateNeeded, setter=_setBackgroundViewUpdateNeeded:, nonatomic) BOOL _backgroundViewUpdateNeeded;
@property (nonatomic, readonly) UIView *_dotAndLabelContainerView;
@property (nonatomic, readonly) CAMZoomDialDotsView *_dotsFrom2x;
@property (nonatomic, readonly) CAMZoomDialDotsView *_dotsFromMinimumZoomFactor;
@property (getter=_isLabelAndDotUpdateNeeded, setter=_setLabelAndDotUpdateNeeded:, nonatomic) BOOL _labelAndDotUpdateNeeded;
@property (setter=_setLabels:, nonatomic, retain) NSArray *_labels;
@property (setter=_setRadiusDelta:, nonatomic) float _radiusDelta;
@property (setter=_setSpacingMultiplier:, nonatomic) float _spacingMultiplier;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } dialCenter;
@property (getter=isExpanded, nonatomic) BOOL expanded;
@property (nonatomic) float maximumZoomFactor;
@property (nonatomic) float minimumZoomFactor;
@property (nonatomic) int orientation;
@property (nonatomic) BOOL shouldDisableValuesBelow2x;
@property (nonatomic) BOOL shouldShowLabelAt2x;
@property (nonatomic) float zoomFactor;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_createBackgroundImage;
- (id)_createDotImage;
- (id)_dotAndLabelContainerView;
- (struct CGPoint { float x1; float x2; })_dotCenterForOffsetAngle:(float)arg1 assumeExpanded:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_dotCenterForZoomFactor:(float)arg1 assumeExpanded:(BOOL)arg2 relativeToCurrentZoomFactor:(BOOL)arg3;
- (id)_dotsFrom2x;
- (id)_dotsFromMinimumZoomFactor;
- (float)_fullRadius;
- (BOOL)_isBackgroundViewUpdateNeeded;
- (BOOL)_isLabelAndDotUpdateNeeded;
- (float)_labelRotationAngleForOrientation;
- (id)_labels;
- (float)_offsetAngleForZoomFactor:(float)arg1 relativeToCurrentZoomFactor:(BOOL)arg2;
- (float)_radiusDelta;
- (void)_setBackgroundViewUpdateNeeded:(BOOL)arg1;
- (void)_setLabelAndDotUpdateNeeded:(BOOL)arg1;
- (void)_setLabels:(id)arg1;
- (void)_setRadiusDelta:(float)arg1;
- (void)_setSpacingMultiplier:(float)arg1;
- (float)_signedAngleDeltaForZoomRange;
- (float)_spacingMultiplier;
- (void)_updateBackroundImageViewIfNeeded;
- (void)_updateDots;
- (void)_updateLabels;
- (void)_updateLabelsAndDotsIfNeeded;
- (void)_updateViewVisibility;
- (struct CGPoint { float x1; float x2; })dialCenter;
- (struct CGPoint { float x1; float x2; })dotCenterForZoomFactor:(float)arg1 assumeExpanded:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isExpanded;
- (void)layoutSubviews;
- (float)maximumZoomFactor;
- (float)minimumZoomFactor;
- (float)normalizedValueForZoomFactor:(float)arg1;
- (float)offsetAngleForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)offsetAngleForZoomFactor:(float)arg1;
- (int)orientation;
- (void)removeInternalAnimationsAndSetToCurrentPresentationValues:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaximumZoomFactor:(float)arg1;
- (void)setMinimumZoomFactor:(float)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setShouldDisableValuesBelow2x:(BOOL)arg1;
- (void)setShouldShowLabelAt2x:(BOOL)arg1;
- (void)setZoomFactor:(float)arg1;
- (BOOL)shouldDisableValuesBelow2x;
- (BOOL)shouldShowLabelAt2x;
- (float)zoomFactor;
- (float)zoomFactorForNormalizedValue:(float)arg1;
- (float)zoomFactorForOffsetAngle:(float)arg1;

@end
