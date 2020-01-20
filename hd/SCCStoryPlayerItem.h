//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCCStoryPlayerManifestItem, SCCStoryPlayerPublisherItem, SCCStoryPlayerStoryDocItem, SCComposerRef;

@interface SCCStoryPlayerItem : SCComposerMarshallableObject
{
    SCComposerRef *_baseView;
    SCCStoryPlayerManifestItem *_storyManifestItem;
    SCCStoryPlayerPublisherItem *_publisherItem;
    SCCStoryPlayerStoryDocItem *_storyDocItem;
    id <SCCStoryPlayerNativeItem> _nativeItem;
}

@property(retain, nonatomic) id <SCCStoryPlayerNativeItem> nativeItem; // @synthesize nativeItem=_nativeItem;
@property(retain, nonatomic) SCCStoryPlayerStoryDocItem *storyDocItem; // @synthesize storyDocItem=_storyDocItem;
@property(retain, nonatomic) SCCStoryPlayerPublisherItem *publisherItem; // @synthesize publisherItem=_publisherItem;
@property(retain, nonatomic) SCCStoryPlayerManifestItem *storyManifestItem; // @synthesize storyManifestItem=_storyManifestItem;
@property(retain, nonatomic) SCComposerRef *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBaseView:(id)arg1 storyManifestItem:(id)arg2 publisherItem:(id)arg3 storyDocItem:(id)arg4 nativeItem:(id)arg5;

@end

