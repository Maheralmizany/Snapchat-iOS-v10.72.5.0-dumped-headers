//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringBoolDictionary, NSString;

@interface IMPReportHighlightCallbackRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringBoolDictionary *actions; // @dynamic actions;
@property(readonly, nonatomic) unsigned long long actions_Count; // @dynamic actions_Count;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *originalPayload; // @dynamic originalPayload;
@property(copy, nonatomic) NSString *referenceId; // @dynamic referenceId;
@property(copy, nonatomic) NSString *source; // @dynamic source;

@end

