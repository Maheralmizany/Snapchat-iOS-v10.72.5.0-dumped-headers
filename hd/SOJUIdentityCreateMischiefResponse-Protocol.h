//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, SOJUIdentityMischief;

@protocol SOJUIdentityCreateMischiefResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *errorType;
@property(readonly, copy, nonatomic) SOJUIdentityMischief *sojuNewMischief;
@property(readonly, copy, nonatomic) NSString *requestUuid;
@end
