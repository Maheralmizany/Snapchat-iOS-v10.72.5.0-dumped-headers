//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSecurityFideliusClientInitBuilder : NSObject
{
    NSArray *_hashedOutBetas;
    NSString *_sojuNewOutBeta;
    NSString *_sojuNewHashedOutBeta;
    NSString *_sojuNewIwek;
    NSNumber *_sojuNewFideliusVersion;
}

+ (id)withJUSecurityFideliusClientInit:(id)arg1;
- (void).cxx_destruct;
- (id)setSojuNewFideliusVersion:(id)arg1;
- (id)setSojuNewIwek:(id)arg1;
- (id)setSojuNewHashedOutBeta:(id)arg1;
- (id)setSojuNewOutBeta:(id)arg1;
- (id)setHashedOutBetas:(id)arg1;
- (id)build;
- (id)setSojuNewFideliusVersionValue:(int)arg1;

@end

