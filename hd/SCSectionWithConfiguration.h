//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSCopying>;

@interface SCSectionWithConfiguration : NSObject
{
    id <SCCollectionViewSection> _section;
    NSObject<NSCopying> *_configuration;
}

@property(readonly, copy, nonatomic) NSObject<NSCopying> *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SCCollectionViewSection> section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;

@end

