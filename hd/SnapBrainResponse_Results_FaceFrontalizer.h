//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SnapBrainResponse_Results_FaceFrontalizer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *faceVersion; // @dynamic faceVersion;
@property(retain, nonatomic) NSMutableArray *facesArray; // @dynamic facesArray;
@property(readonly, nonatomic) unsigned long long facesArray_Count; // @dynamic facesArray_Count;

@end

