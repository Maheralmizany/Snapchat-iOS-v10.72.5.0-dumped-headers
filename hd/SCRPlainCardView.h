//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCRHtml, SCRImage, SCRStoryElementReference;

@interface SCRPlainCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) SCRHtml *html; // @dynamic html;
@property(retain, nonatomic) SCRImage *image; // @dynamic image;
@property(readonly, nonatomic) int sizingOneOfCase; // @dynamic sizingOneOfCase;
@property(retain, nonatomic) SCRStoryElementReference *storyElement; // @dynamic storyElement;

@end

