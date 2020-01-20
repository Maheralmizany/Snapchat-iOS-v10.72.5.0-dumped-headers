//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchIntent.h"

@class NSString, SCMTPointOfInterest, UIView;

@interface SCMapSearchPoiPlayIntent : NSObject <SCSearchIntent>
{
    SCMTPointOfInterest *_poi;
    UIView *_sourceView;
}

@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) SCMTPointOfInterest *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (id)initWithPoi:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
