//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSDictionary, NSString, SCOperaPage;

@interface SCOperaVideoBoxTransitionLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    double _videoBoxTransitionRatio;
    NSDictionary *_bottomPageProperties;
    NSString *_title;
    NSString *_headline;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDictionary *bottomPageProperties; // @synthesize bottomPageProperties=_bottomPageProperties;
@property(readonly, nonatomic) double videoBoxTransitionRatio; // @synthesize videoBoxTransitionRatio=_videoBoxTransitionRatio;
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

