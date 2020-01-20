//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaGifProvider.h"
#import "SCOperaImageProvider.h"

@class NSString, SCSnapGrapheneLogger;

@interface SCChatMediaContentOperaImageProvider : NSObject <SCOperaGifProvider, SCOperaImageProvider>
{
    _Bool _playingSnaps;
    _Bool _isBroadcastSnap;
    id <SCAudioStitch> _audioStitch;
    SCSnapGrapheneLogger *_snapGraphene;
}

- (void).cxx_destruct;
- (void)gifForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlayingSnaps:(_Bool)arg1 isBroadcastSnap:(_Bool)arg2 audioStitch:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
