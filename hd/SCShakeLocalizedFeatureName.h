//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCShakeLocalizedFeatureName : NSObject
{
    NSString *_canonical;
    NSString *_localized;
    NSString *_otherInfo;
}

@property(copy, nonatomic) NSString *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, copy, nonatomic) NSString *localized; // @synthesize localized=_localized;
@property(readonly, copy, nonatomic) NSString *canonical; // @synthesize canonical=_canonical;
- (void).cxx_destruct;
- (id)initWithCanonical:(id)arg1 localized:(id)arg2;

@end

