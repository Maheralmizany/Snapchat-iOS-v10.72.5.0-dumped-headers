//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPreviewExportPolicy.h"

@class SCPreviewConfiguration;

@interface SCPreviewExportDefaultPolicy : NSObject <SCPreviewExportPolicy>
{
    _Bool _overlayShouldBeEmbedded;
    id <SCPreviewResources> _resourceProvider;
    SCPreviewConfiguration *_configuration;
}

@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SCPreviewResources> resourceProvider; // @synthesize resourceProvider=_resourceProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool snapShouldBeWatermarked;
@property(readonly, nonatomic) _Bool overlayShouldBeEmbedded;
- (void)needToEmbedOverlay;
- (id)initWithResourceProvider:(id)arg1;

@end

