//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUCaptionShadow;

@interface SOJUCaptionStyleBuilder : NSObject
{
    NSString *_name;
    NSString *_fontName;
    NSArray *_styleProperty;
    NSString *_caps;
    NSNumber *_kerning;
    NSNumber *_leading;
    NSNumber *_borderWidth;
    SOJUCaptionShadow *_shadow;
    NSNumber *_backgroundColor;
    NSArray *_fontColor;
    NSString *_fontPatternImageUrl;
    NSString *_fontColorMode;
    NSNumber *_colorChangeable;
    NSNumber *_rotation;
    NSArray *_effect;
    NSString *_regularTypefaceUrl;
    NSString *_boldTypefaceUrl;
    NSString *_italicsTypefaceUrl;
    NSString *_italicsBoldTypefaceUrl;
    NSNumber *_backgroundCornerRadius;
    NSString *_fontFamilyName;
    NSString *_backgroundImageUrl;
    NSString *_displayName;
}

+ (id)withJUCaptionStyle:(id)arg1;
- (void).cxx_destruct;
- (id)setDisplayName:(id)arg1;
- (id)setBackgroundImageUrl:(id)arg1;
- (id)setFontFamilyName:(id)arg1;
- (id)setBackgroundCornerRadius:(id)arg1;
- (id)setItalicsBoldTypefaceUrl:(id)arg1;
- (id)setItalicsTypefaceUrl:(id)arg1;
- (id)setBoldTypefaceUrl:(id)arg1;
- (id)setRegularTypefaceUrl:(id)arg1;
- (id)setEffect:(id)arg1;
- (id)setRotation:(id)arg1;
- (id)setColorChangeable:(id)arg1;
- (id)setFontColorMode:(id)arg1;
- (id)setFontPatternImageUrl:(id)arg1;
- (id)setFontColor:(id)arg1;
- (id)setBackgroundColor:(id)arg1;
- (id)setShadow:(id)arg1;
- (id)setBorderWidth:(id)arg1;
- (id)setLeading:(id)arg1;
- (id)setKerning:(id)arg1;
- (id)setCaps:(id)arg1;
- (id)setStyleProperty:(id)arg1;
- (id)setFontName:(id)arg1;
- (id)setName:(id)arg1;
- (id)build;
- (id)setBackgroundCornerRadiusValue:(double)arg1;
- (id)setRotationValue:(double)arg1;
- (id)setColorChangeableValue:(_Bool)arg1;
- (id)setFontColorModeEnum:(long long)arg1;
- (id)setBackgroundColorValue:(int)arg1;
- (id)setBorderWidthValue:(double)arg1;
- (id)setLeadingValue:(double)arg1;
- (id)setKerningValue:(double)arg1;
- (id)setCapsEnum:(long long)arg1;

@end

