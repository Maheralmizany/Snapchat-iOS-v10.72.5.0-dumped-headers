//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIText, NSArray;

@interface SPText : NSObject
{
    AIText *_aiText;
    NSArray *_textLines;
}

@property(readonly, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(readonly, nonatomic) AIText *aiText; // @synthesize aiText=_aiText;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToSPText:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)representedText;
- (unsigned long long)length;
- (id)initWithAIText:(id)arg1 textLines:(id)arg2;
- (id)initWithText:(id)arg1 textLines:(id)arg2;

@end

