//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSnapKitProtoOAuthClient : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *approvedScopesArray; // @dynamic approvedScopesArray;
@property(readonly, nonatomic) unsigned long long approvedScopesArray_Count; // @dynamic approvedScopesArray_Count;
@property(nonatomic) int confidentiality; // @dynamic confidentiality;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;

@end

