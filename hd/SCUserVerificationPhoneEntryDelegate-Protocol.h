//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUserVerificationSubscreenDelegate.h"

@class SCPhoneNumber;

@protocol SCUserVerificationPhoneEntryDelegate <SCUserVerificationSubscreenDelegate>
- (void)phoneEntryCompletedWithPhoneNumber:(SCPhoneNumber *)arg1;
- (void)phoneEntrySwitchedWithPhoneNumber:(SCPhoneNumber *)arg1;
@end

