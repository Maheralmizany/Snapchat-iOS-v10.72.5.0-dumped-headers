//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SnapBrainResponse_Results_SpokenKeywords_Result_Keyword : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double confidence; // @dynamic confidence;
@property(nonatomic) _Bool isBrand; // @dynamic isBrand;
@property(nonatomic) _Bool isProfanity; // @dynamic isProfanity;
@property(nonatomic) double length; // @dynamic length;
@property(nonatomic) double start; // @dynamic start;
@property(copy, nonatomic) NSString *word; // @dynamic word;

@end

