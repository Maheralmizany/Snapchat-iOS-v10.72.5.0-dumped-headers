//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPhoneNumber;

@protocol SCUserVerificationPhoneEntryEventLogger <NSObject>
- (void)logPhoneSubmitted;
- (void)logSkipPhoneEntry;
- (void)logSubmitPhoneWithPhoneNumber:(SCPhoneNumber *)arg1;
- (void)logPhoneEntryBegin;
@end

