//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSArray, NSString, SCOperaPage;

@interface SCCameraProductOperaLayer : NSObject <SCOperaLayer>
{
    _Bool _shouldSelectOurStory;
    SCOperaPage *_page;
    NSArray *_lenses;
    NSString *_adId;
    NSString *_adRequestClientId;
}

+ (id)_cameraLensItemsFromItemsProperties:(id)arg1;
+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool shouldSelectOurStory; // @synthesize shouldSelectOurStory=_shouldSelectOurStory;
@property(readonly, copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

