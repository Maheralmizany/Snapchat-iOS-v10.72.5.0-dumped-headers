//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol LSADebugListener <NSObject>
- (_Bool)isDebugEnabled;
- (_Bool)isDebugActive;
- (void)debugDataAvailable:(NSData *)arg1;
@end

