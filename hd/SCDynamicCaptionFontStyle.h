//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, SCDynamicCaptionTextColor, SCDynamicCaptionTextPadding;

@interface SCDynamicCaptionFontStyle : NSObject <NSCopying, NSCoding>
{
    NSString *_fontName;
    NSString *_fontURL;
    double _fontSize;
    double _minFontSize;
    double _fontBorderWidth;
    SCDynamicCaptionTextColor *_textColor;
    SCDynamicCaptionTextColor *_borderColor;
    long long _textTransform;
    long long _textDecoration;
    long long _textAlignment;
    NSArray *_textShadows;
    SCDynamicCaptionTextPadding *_textPadding;
    double _letterSpacing;
    double _lineHeight;
    NSString *_backgroundImageURL;
    long long _backgroundRepeat;
}

@property(readonly, nonatomic) long long backgroundRepeat; // @synthesize backgroundRepeat=_backgroundRepeat;
@property(readonly, copy, nonatomic) NSString *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(readonly, nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextPadding *textPadding; // @synthesize textPadding=_textPadding;
@property(readonly, copy, nonatomic) NSArray *textShadows; // @synthesize textShadows=_textShadows;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long textDecoration; // @synthesize textDecoration=_textDecoration;
@property(readonly, nonatomic) long long textTransform; // @synthesize textTransform=_textTransform;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) double fontBorderWidth; // @synthesize fontBorderWidth=_fontBorderWidth;
@property(readonly, nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, copy, nonatomic) NSString *fontURL; // @synthesize fontURL=_fontURL;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontName:(id)arg1 fontURL:(id)arg2 fontSize:(double)arg3 minFontSize:(double)arg4 fontBorderWidth:(double)arg5 textColor:(id)arg6 borderColor:(id)arg7 textTransform:(long long)arg8 textDecoration:(long long)arg9 textAlignment:(long long)arg10 textShadows:(id)arg11 textPadding:(id)arg12 letterSpacing:(double)arg13 lineHeight:(double)arg14 backgroundImageURL:(id)arg15 backgroundRepeat:(long long)arg16;
- (id)initWithCoder:(id)arg1;

@end
