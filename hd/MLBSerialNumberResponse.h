//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface MLBSerialNumberResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *factorySerialNumber; // @dynamic factorySerialNumber;
@property(nonatomic) _Bool hasFactorySerialNumber; // @dynamic hasFactorySerialNumber;
@property(nonatomic) _Bool hasSerialNumber; // @dynamic hasSerialNumber;
@property(copy, nonatomic) NSData *serialNumber; // @dynamic serialNumber;

@end
