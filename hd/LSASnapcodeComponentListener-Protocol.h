//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSASnapcodeComponent, LSASnapcodeScannedData;

@protocol LSASnapcodeComponentListener <NSObject>
- (void)snapcodeComponentDidRequestToTriggerAction:(LSASnapcodeComponent *)arg1;
- (void)snapcodeComponentDidLoseSnapcode:(LSASnapcodeComponent *)arg1;
- (void)snapcodeComponent:(LSASnapcodeComponent *)arg1 didFindSnapcode:(LSASnapcodeScannedData *)arg2;
@end

