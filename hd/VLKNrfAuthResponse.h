//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface VLKNrfAuthResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasHasMore; // @dynamic hasHasMore;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool hasOrigReqType; // @dynamic hasOrigReqType;
@property(nonatomic) _Bool hasResponseData; // @dynamic hasResponseData;
@property(nonatomic) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) int origReqType; // @dynamic origReqType;
@property(copy, nonatomic) NSData *responseData; // @dynamic responseData;
@property(nonatomic) _Bool success; // @dynamic success;

@end

