//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringDoubleDictionary, NSString;

@interface SnapBrainResponse_Results_SnapLang_NewsKeyword : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringDoubleDictionary *categoryScores; // @dynamic categoryScores;
@property(readonly, nonatomic) unsigned long long categoryScores_Count; // @dynamic categoryScores_Count;
@property(copy, nonatomic) NSString *keyword; // @dynamic keyword;

@end
