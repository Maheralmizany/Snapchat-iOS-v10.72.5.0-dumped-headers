//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGTIParameters, SGTIStylizationAndroid, SGTIStylizationIOS;

@interface SGTILink : GPBMessage
{
}

+ (id)descriptor;
+ (id)linkWithURL:(id)arg1;
- (id)asURL;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool hasParameters; // @dynamic hasParameters;
@property(nonatomic) _Bool hasStylizationAndroid; // @dynamic hasStylizationAndroid;
@property(nonatomic) _Bool hasStylizationIos; // @dynamic hasStylizationIos;
@property(retain, nonatomic) SGTIParameters *parameters; // @dynamic parameters;
@property(copy, nonatomic) NSString *serviceId; // @dynamic serviceId;
@property(retain, nonatomic) SGTIStylizationAndroid *stylizationAndroid; // @dynamic stylizationAndroid;
@property(retain, nonatomic) SGTIStylizationIOS *stylizationIos; // @dynamic stylizationIos;

@end

