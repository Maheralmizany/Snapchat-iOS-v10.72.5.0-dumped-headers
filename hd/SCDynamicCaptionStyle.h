//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SCDynamicCaptionBackgroundStyle, SCDynamicCaptionFontStyle, UIColor;

@interface SCDynamicCaptionStyle : NSObject <NSCopying, NSCoding>
{
    _Bool _isColorChangeable;
    NSString *_styleId;
    NSString *_displayName;
    SCDynamicCaptionFontStyle *_fontStyle;
    SCDynamicCaptionBackgroundStyle *_backgroundStyle;
    UIColor *_baseColor;
}

@property(readonly, copy, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(readonly, nonatomic) _Bool isColorChangeable; // @synthesize isColorChangeable=_isColorChangeable;
@property(readonly, copy, nonatomic) SCDynamicCaptionBackgroundStyle *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, copy, nonatomic) SCDynamicCaptionFontStyle *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyleId:(id)arg1 displayName:(id)arg2 fontStyle:(id)arg3 backgroundStyle:(id)arg4 isColorChangeable:(_Bool)arg5 baseColor:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end
