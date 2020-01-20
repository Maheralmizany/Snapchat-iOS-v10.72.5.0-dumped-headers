//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData, SCCStoryPlayerBusinessInfo;

@interface SCCStoryPlayerManifestItem : SCComposerMarshallableObject
{
    NSData *_encodedStoryManifest;
    SCCStoryPlayerBusinessInfo *_businessInfo;
}

@property(retain, nonatomic) SCCStoryPlayerBusinessInfo *businessInfo; // @synthesize businessInfo=_businessInfo;
@property(copy, nonatomic) NSData *encodedStoryManifest; // @synthesize encodedStoryManifest=_encodedStoryManifest;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithEncodedStoryManifest:(id)arg1 businessInfo:(id)arg2;

@end
