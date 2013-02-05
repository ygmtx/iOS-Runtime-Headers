/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADColorMap, OADFontScheme, OADColorScheme, <OADColorPalette>, OADStyleMatrix;

@interface OADDrawingTheme : NSObject {
    OADColorMap *mColorMap;
    <OADColorPalette> *mColorPalette;
    OADColorScheme *mColorScheme;
    OADFontScheme *mFontScheme;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mShapeDefaults;
    OADStyleMatrix *mStyleMatrix;
    OADDefaultProperties *mTextDefaults;
}

@property(readonly) OADColorMap * colorMap;
@property(retain) <OADColorPalette> * colorPalette;
@property(readonly) OADColorScheme * colorScheme;
@property(readonly) OADFontScheme * fontScheme;
@property(readonly) OADDefaultProperties * lineDefaults;
@property(readonly) OADDefaultProperties * shapeDefaults;
@property(readonly) OADStyleMatrix * styleMatrix;
@property(readonly) OADDefaultProperties * textDefaults;

- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)colorMap;
- (id)colorPalette;
- (id)colorScheme;
- (void)dealloc;
- (id)fontScheme;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (id)lineDefaults;
- (void)setColorPalette:(id)arg1;
- (id)shapeDefaults;
- (id)styleMatrix;
- (id)textDefaults;

@end