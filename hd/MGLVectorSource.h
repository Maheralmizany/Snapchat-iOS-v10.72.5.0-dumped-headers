//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLTileSource.h"

@interface MGLVectorSource : MGLTileSource
{
}

+ (id)preferredMapboxStreetsLanguage;
+ (id)mapboxStreetsLanguages;
- (id)featuresInSourceLayersWithIdentifiers:(id)arg1 predicate:(id)arg2;
- (id)attributionHTMLString;
- (id)configurationURL;
@property(readonly, nonatomic) struct VectorSource *rawSource;
- (id)initWithIdentifier:(id)arg1 tileURLTemplates:(id)arg2 options:(id)arg3;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2;
- (id)localizedKeysByKeyForPreferredLanguage:(id)arg1;
@property(readonly, nonatomic, getter=isMapboxStreets) _Bool mapboxStreets;

@end

