//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface SCSFLScanFromLensRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSData *image; // @dynamic image;
@property(nonatomic) _Bool isFrontFacing; // @dynamic isFrontFacing;
@property(retain, nonatomic) NSMutableArray *servicesArray; // @dynamic servicesArray;
@property(readonly, nonatomic) unsigned long long servicesArray_Count; // @dynamic servicesArray_Count;

@end

