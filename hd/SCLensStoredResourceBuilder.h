//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLensResource;

@interface SCLensStoredResourceBuilder : NSObject
{
    NSString *_contentId;
    NSString *_contentPath;
    SCLensResource *_lensResource;
}

+ (id)withLensStoredResource:(id)arg1;
- (void).cxx_destruct;
- (id)setLensResource:(id)arg1;
- (id)setContentPath:(id)arg1;
- (id)setContentId:(id)arg1;
- (id)build;

@end

