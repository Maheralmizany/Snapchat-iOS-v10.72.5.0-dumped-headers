//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCSongInfoPlayNowBuilder : NSObject
{
    NSString *_appleMusicURL;
    NSString *_googlePlayMusicURL;
    NSString *_spotifyURL;
}

+ (id)withSongInfoPlayNow:(id)arg1;
- (void).cxx_destruct;
- (id)setSpotifyURL:(id)arg1;
- (id)setGooglePlayMusicURL:(id)arg1;
- (id)setAppleMusicURL:(id)arg1;
- (id)build;

@end

