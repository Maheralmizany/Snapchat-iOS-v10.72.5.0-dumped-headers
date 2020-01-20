//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

@interface SCStickerPillViewLabelFormat : NSObject
{
    _Bool _isSingleLine;
    NSString *_originalText;
    UIFont *_font;
    long long _characterCount;
    NSString *_formattedText;
    double _lineHeight;
}

@property(readonly, nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(readonly, copy, nonatomic) NSString *formattedText; // @synthesize formattedText=_formattedText;
@property(readonly, nonatomic) _Bool isSingleLine; // @synthesize isSingleLine=_isSingleLine;
@property(readonly, nonatomic) long long characterCount; // @synthesize characterCount=_characterCount;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalText:(id)arg1 font:(id)arg2 characterCount:(long long)arg3 isSingleLine:(_Bool)arg4 formattedText:(id)arg5 lineHeight:(double)arg6;

@end
