//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBImageData_Burst : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *firstImageUuid; // @dynamic firstImageUuid;
@property(nonatomic) int frameRate; // @dynamic frameRate;
@property(nonatomic) _Bool hasFirstImageUuid; // @dynamic hasFirstImageUuid;
@property(nonatomic) _Bool hasFrameRate; // @dynamic hasFrameRate;
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasLength; // @dynamic hasLength;
@property(nonatomic) int index; // @dynamic index;
@property(nonatomic) int length; // @dynamic length;

@end

