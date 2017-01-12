/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKClockIconView : UIView {
    float  _fullDiameter;
    BOOL  _paused;
}

@property (nonatomic) float fullDiameter;
@property (nonatomic) BOOL paused;

- (id)borrowCircleView;
- (id)borrowTimeView;
- (float)fullDiameter;
- (BOOL)paused;
- (void)restoreBorrowedViews;
- (void)setFullDiameter:(float)arg1;
- (void)setPaused:(BOOL)arg1;

@end