//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface VideoTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *contentObject; // @dynamic contentObject;
@property(readonly, nonatomic) int contentOneOfCase; // @dynamic contentOneOfCase;
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) int dynamicURLType; // @dynamic dynamicURLType;
@property(copy, nonatomic) NSString *hlsManifestURL; // @dynamic hlsManifestURL;
@property(nonatomic) int timeScale; // @dynamic timeScale;
@property(copy, nonatomic) NSData *videoContentObject; // @dynamic videoContentObject;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end
