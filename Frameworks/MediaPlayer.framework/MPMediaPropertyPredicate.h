/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate  {
    struct MPMediaPropertyPredicateInternal { 
        NSString *_property; 
        id _value; 
        int _comparisonType; 
    } _internal;
}

@property(copy) NSString * property;
@property(copy) id value;
@property int comparisonType;
@property struct MPMediaPropertyPredicateInternal { id x1; id x2; int x3; } _internal;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(int)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;

- (int)comparisonType;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (void)setComparisonType:(int)arg1;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)set_internal:(struct MPMediaPropertyPredicateInternal { id x1; id x2; int x3; })arg1;
- (struct MPMediaPropertyPredicateInternal { id x1; id x2; int x3; })_internal;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setProperty:(id)arg1;
- (id)property;
- (id)value;
- (void)setValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end