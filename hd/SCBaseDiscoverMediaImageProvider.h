//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaGifProvider.h"
#import "SCOperaImageProvider.h"

@class NSMutableDictionary, NSString;

@interface SCBaseDiscoverMediaImageProvider : NSObject <SCOperaGifProvider, SCOperaImageProvider>
{
    NSMutableDictionary *_loadedImages;
}

- (void).cxx_destruct;
- (void)gifForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

