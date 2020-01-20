//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUEmojiInfoBuilder : NSObject
{
    NSNumber *_type;
    NSString *_source;
    NSString *_title;
    NSString *_emojiDesc;
    NSString *_emojiPickerDesc;
    NSNumber *_defaultType;
    NSString *_defaultVal;
    NSNumber *_emojiLegendRank;
}

+ (id)withJUEmojiInfo:(id)arg1;
- (void).cxx_destruct;
- (id)setEmojiLegendRank:(id)arg1;
- (id)setDefaultVal:(id)arg1;
- (id)setDefaultType:(id)arg1;
- (id)setEmojiPickerDesc:(id)arg1;
- (id)setEmojiDesc:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setSource:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setEmojiLegendRankValue:(int)arg1;
- (id)setDefaultTypeEnum:(long long)arg1;
- (id)setDefaultTypeValue:(int)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTypeValue:(int)arg1;

@end

