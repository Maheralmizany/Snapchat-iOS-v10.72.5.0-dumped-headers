//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCTXCssStyle;

@interface SCCTXImageSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(copy, nonatomic) NSString *local; // @dynamic local;
@property(copy, nonatomic) NSString *remote; // @dynamic remote;
@property(readonly, nonatomic) int srcOneOfCase; // @dynamic srcOneOfCase;
@property(retain, nonatomic) SCCTXCssStyle *style; // @dynamic style;

@end

