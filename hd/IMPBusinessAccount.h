//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPBusinessAccount : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *organizationIdsArray; // @dynamic organizationIdsArray;
@property(readonly, nonatomic) unsigned long long organizationIdsArray_Count; // @dynamic organizationIdsArray_Count;

@end

