//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SDMCaption, SDMMediaMetadata, SDMWebPage;

@interface SDMPlaybackLayer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SDMCaption *caption; // @dynamic caption;
@property(readonly, nonatomic) int layerOneOfCase; // @dynamic layerOneOfCase;
@property(retain, nonatomic) SDMMediaMetadata *media; // @dynamic media;
@property(retain, nonatomic) SDMWebPage *webPage; // @dynamic webPage;

@end

