//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UserFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long accountCreationTimestampSecs; // @dynamic accountCreationTimestampSecs;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) int inferredGender; // @dynamic inferredGender;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(nonatomic) int userAge; // @dynamic userAge;

@end

