//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacAppsMajorUpdateVersion;

@interface SCCognacAppsContentUpdateAlert : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMajorUpdateVersion; // @dynamic hasMajorUpdateVersion;
@property(nonatomic) _Bool majorUpdate; // @dynamic majorUpdate;
@property(copy, nonatomic) NSString *majorUpdateDescription; // @dynamic majorUpdateDescription;
@property(retain, nonatomic) SCCognacAppsMajorUpdateVersion *majorUpdateVersion; // @dynamic majorUpdateVersion;
@property(nonatomic) _Bool newApp; // @dynamic newApp;

@end
