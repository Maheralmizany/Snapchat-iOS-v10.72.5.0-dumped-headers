//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPListRolesForBusinessResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(retain, nonatomic) NSMutableArray *orgRolesArray; // @dynamic orgRolesArray;
@property(readonly, nonatomic) unsigned long long orgRolesArray_Count; // @dynamic orgRolesArray_Count;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSMutableArray *rolesArray; // @dynamic rolesArray;
@property(readonly, nonatomic) unsigned long long rolesArray_Count; // @dynamic rolesArray_Count;

@end
